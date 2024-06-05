# ft_printf
- C 표준 라이브러리 함수 **`printf`를 프로그래밍하는 프로젝트**다.
- `printf` 함수가 인자의 타입 및 개수를 자유롭게 받을 수 있는 이유는 **가변 인자**를 지원하기 때문이다.
- **가변 인자를 활용**하여 `printf` 함수를 구현하고, 그 과정에서 **잘 구조화된 코드를 작성**하는 데에 집중했다.

## **프로그램 실행**
1. 이 레포지토리의 루트에서 `make`를 실행하면 `libftprintf.a` 아카이브 파일이 생성된다.   
(`libftprintf.a`는 `libft` 함수들과 `ft_printf` 함수가 포함된 아카이브 파일이다.)
2. `main`문이 담긴 c 파일과 `libftprintf.a` 아카이브 파일을 함께 컴파일한다.
    ```shell
    cc test_main.c libftprintf.a
    ```
3. 생성된 a.out 실행 파일을 실행하면, 기존 `printf`와 `ft_printf`의 동작이 동일한지 확인할 수 있다.
 
##
학습 내용과 프로젝트 진행 과정에 대한 자세한 이야기는 [여기서](https://velog.io/@ronn/ftprintf-C-%ED%91%9C%EC%A4%80-%EB%9D%BC%EC%9D%B4%EB%B8%8C%EB%9F%AC%EB%A6%AC-%ED%95%A8%EC%88%98-printf%EB%A5%BC-%EA%B5%AC%ED%98%84%ED%95%98%EC%9E%90) 확인할 수 있다.
