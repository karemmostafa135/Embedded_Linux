#!/bin/bash
sudo useradd YourName
sudo usermod -aG FamilyName YourName
cat /etc/passwd | grep "YourName"
cat /etc/group | grep "FamilyName"
