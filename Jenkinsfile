pipeline {
    agent {
        dockerfile true
    }

    stages {
        stage('HIL Test') {
            steps {
                sh 'python -m pip install -r requirements.txt --user'
                sh 'python test.py'
            }
        }
    }
}
