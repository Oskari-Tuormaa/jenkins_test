FROM python:3.10

# Create jenkins user
RUN mkdir /home/jenkins
COPY . /home/jenkins
RUN groupadd -g 124 jenkins
RUN useradd -r -u 124 -g jenkins -d /home/jenkins jenkins
RUN chown -R jenkins:jenkins /home/jenkins
RUN echo '%sudo ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers
USER jenkins
WORKDIR /home/jenkins
