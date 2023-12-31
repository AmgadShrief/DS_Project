#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_InputFile_clicked()
{
        // Open a file dialog to choose a file
        QString filePath = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Text Files (*.txt);;All Files (*)"));

        // Check if a file was selected
        if (!filePath.isEmpty()) {
            // Open the selected file
            QFile file(filePath);

            // Check if the file can be opened
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                // Read the contents of the file
                QTextStream in(&file);
                QString fileContent = in.readAll();

                // Close the file
                file.close();

                // Display the file content in a QTextEdit (assuming you have a QTextEdit widget named 'textEdit' in your UI)
                ui->InputText->setPlainText(fileContent);
            } else {
                // Handle the case where the file couldn't be opened
                qDebug() << "Error: Could not open file";
            }
        }
}

