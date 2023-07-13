# Learning & Using Git [![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome)

<!-- image of git -->

![Git Logo](https://git-scm.com/images/logos/downloads/Git-Logo-2Color.png)

## Introduction

Git is a version control system that allows you to track changes to files over time. It is used by many developers to keep track of their code changes and collaborate with others. Git is also used by many companies to manage their codebase.

<details>
<summary><h3> 👨‍💻 What is git?</h3></summary>

Git is a distributed version control system (VCS) designed to track changes in software code and coordinate work among multiple developers. It was created by Linus Torvalds, the same person who developed the Linux operating system.

Here are some key aspects of Git:

1. **Version Control :** Git allows you to keep track of changes made to files in your project over time. It records every modification, addition, or deletion, enabling you to revert to previous versions, compare changes, and collaborate effectively.

2. **Distributed :** Git is a distributed VCS, meaning that every developer working on a project has a complete copy of the entire codebase and its history on their local machine. This allows for offline work and provides redundancy in case of server failures.

3. **Branching and Merging :** Git encourages a branching workflow, where developers can create separate branches to work on new features or bug fixes independently. Branches can be merged back into the main codebase, enabling concurrent development without conflicts.

4. **Collaboration :** Git facilitates collaboration by allowing multiple developers to work on the same project simultaneously. Changes made by different developers can be easily merged together, and conflicts can be resolved with Git's built-in tools.

5. **Remote Repositories :** Git allows you to create remote repositories, which act as central hubs for collaboration. Remote repositories can be hosted on services like GitHub, GitLab, or Bitbucket, providing a platform for sharing code, managing issues, and facilitating collaboration among team members.

6. **Command Line and GUI :** Git provides a command-line interface (CLI) for executing Git commands, but there are also various graphical user interfaces (GUIs) available that offer a more user-friendly way to interact with Git.

7. **Open Source :** Git itself is an open-source project, and it has become one of the most widely used version control systems across different domains, not limited to software development.

By utilizing Git, developers can work more efficiently, track changes effectively, collaborate seamlessly, and maintain a reliable history of their codebase. It has become an essential tool in the software development industry, empowering teams to build better software together.

</details>

## Index :

- [Installation git](#installation)
- [Configuration git](#configuration)
- [Intializing git reprojectory](#intializing-git)
- [Common git Commands](#git-commands)
- [Add Files into git reprojectory](#commit-files)
- [Branching](#branching)
- [Merging](#merging)
- [Stashing](#stashing)
- [Reverting](#reverting)
- [Remote Repositories](#remote-repositories)
- [Pushing](#pushing)
- [Pulling](#pulling)
- [Summary](#summary)
- [Resources](#resources)

---

## Installation

### Windows

1. Download the installer from [here](https://git-scm.com/download/win)

2. Run the installer

3. Follow the instructions in the installer

### Mac

1. Download the installer from [here](https://git-scm.com/download/mac)

2. Run the installer

3. Follow the instructions in the installer

### Linux

1. Run the following command in your terminal

```bash
sudo apt-get install git
```

2. Follow the instructions in the installer


### Checking the installation

**Open the terminal and run the following command**

```bash
git --version
```

output : 

```bash
git version <version number>
```

### Setup a Gobal Username and Email

**Open the terminal and run the following command**

```bash
git config --global user.name "Your Name"
git config --global user.email "Your Email"
```

### Updating git

**Windows**

- simply download the latest version from [here](https://git-scm.com/download/win)

**Mac**

- simply download the latest version from [here](https://git-scm.com/download/mac)

**Linux**

- run the following command in your terminal

```bash
sudo apt-get update
```

- then run the following command

```bash
sudo apt-get install git
```

### Uninstalling git

**Windows**

- Uninstall like other software

**Mac**

- Uninstall like other software

**Linux**

- run the following command in your terminal

```bash
sudo apt-get remove git
```

---

## Configuration

### Local Configuration

```bash
git config --local user.name "Your Name"
git config --local user.email "
```

### Global Configuration

```bash
git config --global user.name "Your Name"
git config --global user.email "
```

### System Configuration

```bash
git config --system user.name "Your Name"
git config --system user.email "
```

### Check Configuration

**local**

```bash
git config --local --list
```

**global**

```bash
git config --global --list
```

**system**

```bash
git config --system --list
```

### Edit Configuration


**local**

```bash
git config --local --edit
```

**global**

```bash
git config --global --edit
```

**system**

```bash
git config --system --edit
```

### Remove Configuration

**local**

```bash
git config --local --unset user.name
git config --local --unset user.email
```

**global**

```bash
git config --global --unset user.name
git config --global --unset user.email
```

**system**

```bash
git config --system --unset user.name
git config --system --unset user.email
```


---

## intializing git

### 1. Create a new repository for new project

**Go to the project folder**

```bash
git init
```

### 2. If it is an existing project

**check if it is already a git repository**

```bash
git status
```

output : 

```bash 
fatal: not a git repository (or any of the parent directories): .git
```

**Then**

```bash
git init
```

output : 

```bash
Initialized empty Git repository in /home/username/.../project/.git/
```

*** Advance Intiallization ***

** initialize a git repository with a name
*Default name is .git and branch is master*
*This .git folder is hidden*

```bash
git init <name>
```

** initialize a git repository with a name and a brach and a description and a template and a shared

*As you nessary, you can use or not use these options*

```bash
git init <name> --initial-branch=<branch name> --description="<description>" --template="<template>" --shared=<shared>
```

---------------

## git Commands

***For the Ignore any files or folders add into .gitignore file***

**For more details about .gitignore file, [click here](https://git-scm.com/docs/gitignore)**

**Add some Readme.md file into the project for projects details**

### 1. To check the status of the git repository

```bash
git status
```

### 2. To check the status of the git repository with more details

```bash
git status -v
```

### 3. To check the status of the git repository with more details and branch

```bash
git status -v -b
```

### 4. To check the status of the git repository with more details and branch and untracked files and ignored files and ahead and behind and verbose and porcelain and long and show-stash and branch and no-porcelain and no-ahead-behind and no-renames and ignore-submodules and column

```bash
git status -v -b --untracked-files --ignored --ahead-behind --verbose --porcelain --long --show-stash --branch --no-porcelain --no-ahead-behind --no-renames --ignore-submodules --column
```

**For more details about git status command, [click here](https://git-scm.com/docs/git-status)**

### 1. Remove the file from the git repository

```bash
git rm <file name>
```

### 2. Remove the file from the git repository with force

```bash
git rm -f <file name> 
```

### 3. Remove the file from the git tracking but not from the git repository

```bash
git rm --cached <file name>
```

**Then add that file to .gitignore file for not tracked**


---------------

## commit files

### 1. Add all files

```bash
git add .
```

### 2. Add a specific file

```bash
git add <file name>
```

### 3. Add a specific type of files

```bash
git add *.<extension>
```

### 4. Add all files to git reprository with extension in all subfolders

```bash
git add *.<extension> --all
```

### 5. Add all extension files to git reprository with extension from subfolders

```bash
git addd **/*.<extension>
```

**Similarly you can use **/**/*.<extension> for subfolders and subfolders**

### 1. To commit the changes

```bash
git commit -m "commit message"
```

### 2. To commit the changes with a specific file

```bash
git commit <file name> -m "commit message"
```

**Similarly to stage files you can use git commit 
and all command options**

### 3. To stage and commit in one command

```bash
git commit -am "commit message"
```

### 4. To stage and commit a specific file in one command

```bash
git commit <file name> -am "commit message"
```

### 1. To remove the files from the stage area

```bash
git reset <file name>
```

### 2. To remove all files from the stage area

```bash
git reset
```

---------------




## Branches

### 1. To create a new branch

```bash
git branch <branch name>
```

### 2. To create a new branch from a specific branch

```bash
git branch <new branch name> <old branch name>
```

### 3. To create a new branch from a specific commit

```bash
git branch <new branch name> <commit id>
```

### 1. To create a new branch from the current branch and switch to that branch

```bash
git checkout -b <new branch name>
```

### 2. To create a new branch from a specific commit and switch to that branch

```bash
git checkout -b <new branch name> <commit id>
```

### 3. To create a new branch from a specific branch and switch to that branch

```bash
git checkout -b <new branch name> <old branch name>
```

### 4. To create a new branch from a specific tag and switch to that branch

```bash
git checkout -b <new branch name> <tag name>
```

### 1. To create new brance from a specific commit

**Make sure you have the latest changes from the specific branch by running the following**

```bash
git checkout <branch name>
git pull origin <branch name>
```

**Create a new branch based on the specific branch by running**

```bash
git checkout -b <new branch name>
```

### 1. To list all branches

```bash
git branch
```

### 2. To list all branches with more details

```bash
git branch -v
```
