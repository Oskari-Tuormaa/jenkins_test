#!groovy

pipeline {
    environment {
        JENKINS_USER_NAME = "${sh(script:'id -un', returnStdout: true).trim()}"
        JENKINS_USER_ID   = "${sh(script:'id -u',  returnStdout: true).trim()}"
        JENKINS_GROUP_ID  = "${sh(script:'id -g',  returnStdout: true).trim()}"
    }

    agent {
        dockerfile {
            additionalBuildArgs '''\
                --build-arg GID=$JENKINS_GROUP_ID \
                --build-arg UID=$JENKINS_USER_ID \
                --build-arg UNAME=$JENKINS_USER_NAME \
            '''
        }
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
