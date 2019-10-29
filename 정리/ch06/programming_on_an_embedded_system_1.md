# Progrmming on an embedded system 1

이번 시간부터 실제 임베디드 보드 위에서 프로그래밍 하는 방법들을 배운다.

## 개관

교차 개발환경(cross development programming)에서 프로그래밍 하게 된다.

보드 구성

- 프로세서 : Atmega 128
- LED
- FND (7 segment)
- GPIO 핀 : 8개 묶음 6개(A~F) + 5개 묶음 1개(G) = 총 53개의 핀
- BUZZER
- 스위치 2개

Atmega 128 특성

- GPIO 핀을 이용해서 하드웨어를 제어하거나 신호를 처리할 수 있다.
- RISC(Reduced Instruction Set C?) 명령어 사용
- 32개의 8bit 레지스터
- 128K의 EEPROM, 128K의 SRAM, flash memory

### Pull Up, Pull Down

## 실습 키트와 개발 환경

## LED

먼저 LED가 어떻게 연결되어 있는지 회로를 확인해야 한다. 어떤 GPIO 연결되어 있는지 확인한 다음, 해당 GPIO와 연관된 레지스터에 값을 쓴다.

```c
DDRA = 0xFF;  // 해당 GPIO 핀을 출력용으로 셋팅
PORTA = 0xFF; // GPIO A를 모두 1로 설정 (LED 켜기)
```

## FND

7세트먼트 또는 8세그먼트(점 포함) LED. 숫자 또는 알파벳을 표현할 수 있다.
