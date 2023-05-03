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
                --build-arg GID=${id -g} \
                --build-arg UID=${id -u} \
                --build-arg UNAME=${id -un} \
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
