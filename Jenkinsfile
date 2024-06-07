pipeline {
    agent any

    environment {
        IDF_PATH = 'C:\\Espressif\\esp-idf'
    }

    stages {
        stage('Setup_Environment') {
            steps {
                bat 'call F:\\ESP-Examples\\first-launch\\batch_directory\\setup_env.bat'
            }
        }

        stage('Build') {
            steps {
                bat 'call F:\\ESP-Examples\\first-launch\\batch_directory\\build_project.bat'
            }
        }

        stage('Run Tests') {
            steps {
                bat 'call F:\\ESP-Examples\\first-launch\\batch_directory\\run_tests.bat'
            }
        }
    }

    post {
        always {
            archiveArtifacts artifacts: '**/build/**', allowEmptyArchive: true
        }
        success {
            echo 'Build and tests completed successfully!'
        }
        failure {
            echo 'Build or tests failed!'
        }
    }
}
