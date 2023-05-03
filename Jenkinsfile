#!groovy

pipeline {
    agent {
        dockerfile {
            additionalBuildArgs '''\
                --build-arg GID=`id -g` \
                --build-arg UID=`id -u` \
                --build-arg UNAME=`id -un` \
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

        stage('Build source') {
            steps {
                sh 'cmake -B build -S project'
                sh 'cmake --build build -j8'
                sh 'build/a.out'
            }
        }
    }
}
