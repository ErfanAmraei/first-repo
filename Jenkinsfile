pipeline {
    agent any

    environment {
        IDF_PATH = 'C:\\Espressif\\esp-idf'
    }

    stages {
        stage('Setup_Environment') {
            steps {
                echo "hello jenkins"
            }
        }

        stage('Build') {
            steps {
               echo "it is built"
            }
        }

        stage('Run Tests') {
            steps {
                echo "it is runned"
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
