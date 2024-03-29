# ft_printf
- C 표준 라이브러리 함수 **`printf`를 프로그래밍하는 프로젝트**다.
- `printf` 함수가 인자의 타입 및 개수를 자유롭게 받을 수 있는 이유는 **가변 인자**를 지원하기 때문이다.
- **가변 인자를 활용**하여 `printf` 함수를 구현하고, 그 과정에서 **잘 구조화된 코드를 작성**하는 데에 집중했다.

### **ft_printf를 실행시키는 방법**
1. 이 레포지토리의 루트에서 `make`를 실행하면 `libftprintf.a` 아카이브 파일이 생성된다.   
(`libftprintf.a`는 `libft` 함수들과 `ft_printf` 함수가 포함된 아카이브 파일이다.)
2. `main`문이 담긴 c 파일과 `libftprintf.a` 아카이브 파일을 함께 컴파일한다.
    ```shell
    cc test_main.c libftprintf.a
    ```
