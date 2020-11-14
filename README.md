# Git Practice

Practicing Git &amp; Github for collaboration.

## Who has been here?

Add your Github username below:

- [x] serranoarevalo!
- [x] 정현

### What have you learned here?

- commit, push

  - git commit -m "message"
  - git commit --amend --no-edit
    - 파일을 추가할 경우 등에 활용(git add .(추가사항을 git에 추가 후)/ --no-edit 대신 -m "message2"로 가능)
  - git push origin master
  - git push origin master --force
    - 강제로 푸시(덮어버림)

- checkout

  - git log (나가는 방법은 q)
    - commit 가져오기
  - git checkout <commit>
    - HEAD 위치를 옮김
  - git checkout <commit> -b <new-branch-name>
    - HEAD 위치가 옮겨지고 branch 생성
  - git checkout master
    - HEAD 원위치

- branch

  - git branch
    - branch 확인
  - git branch -d <branch-name>
    - branch 삭제

- reset

  - git reset HEAD^
  - git reset HEAD~3
    - --hard
    - --mixed(default)
    - --soft

- clone

  - git clone <url>
  - git clone <url> <clone-name>

- status

  - git status
    - commit하게 될 파일을 확인 가능

- remove

  - git rm -r(폴더를 삭제시 사용) --cached(이미 캐시된 경우) <file-or-folder/>

- remote

  - git remote -v
    - 원격저장소 목록 보기
  - git remote add <origin-name> <url>
  - git remote remove <origin-name>
