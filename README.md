# Ultrasonic Distance Control with Stepper Motor - ATmega32

This embedded project measures distance using an ultrasonic sensor and displays the result on an LCD. When a valid distance is detected, the system controls a stepper motor to rotate in a clockwise direction. The application runs on the **ATmega32** microcontroller and uses several hardware abstraction layers for modularity.

---

## Features

- Measures distance using an ultrasonic sensor (HC-SR04 or similar)
- Displays real-time distance on 16x2 LCD
- Drives a stepper motor based on distance feedback
- Modular design using HAL drivers (LED, Button, LCD, PWM, etc.)
- Configurable interrupt handling and general timer usage

---

## Components Used

| Component             | Description                              |
|----------------------|------------------------------------------|
| ATmega32             | Main microcontroller                     |
| HC-SR04 Ultrasonic Sensor | Measures distance by echo and trigger pins |
| Stepper Motor        | Controlled based on measured distance     |
| 16x2 LCD             | Displays distance measurements            |
| Resistors            | For signal conditioning                   |
| Power Supply         | 5V regulated source                       |

---

## Project Structure

| File                 | Description                                      |
|----------------------|--------------------------------------------------|
| `First LED Lab.c`    | Main application code                            |
| `LED_Core.h`         | LED control module                               |
| `Button_Core.h`      | Button input handler                             |
| `LCD_Core.h`         | LCD initialization and display functions         |
| `UltraSonic_Core.h`  | Ultrasonic sensor driver (trigger/echo logic)    |
| `DcMotor_Core.h`     | DC/Stepper motor control                         |
| `IRQH_Core.h`        | Global and external interrupt handlers           |
| `GPT_Core.h`         | General purpose timer setup                      |
| `PWM_Core.h`         | Pulse-width modulation utilities (optional)      |
| `WDT.h`              | Watchdog timer control (optional)                |

---

## Functional Overview

### `main()`
- Initializes hardware: ports, interrupts, timers, LCD, ultrasonic module
- Continuously measures distance in the main loop
- Displays distance on LCD
- If a valid distance is detected, rotates the stepper motor clockwise

---

## Development Environment

- Microcontroller: ATmega32
- Language: C (AVR-GCC)
- IDE: Atmel Studio / Microchip Studio
- Simulation: Proteus (optional)
- Programmer: USBasp / AVR ISP

---

## How to Use

1. Power the board and peripherals.
2. The ultrasonic sensor triggers automatically every cycle.
3. Measured distance is displayed on the LCD.
4. The motor is rotated in the clockwise direction when a valid distance is detected.
5. If the measured distance is below a certain threshold (e.g., 50 cm), you can implement additional logic (currently a placeholder).

---

## Notes

- The code uses polling-based logic, but can be adapted for interrupt-driven input.
- Ensure correct pin configuration for ICU (Input Capture Unit) if used for ultrasonic timing.
- Stepper motor control assumes a compatible driver (ULN2003 or L298N).
- All peripheral modules are separated for better maintainability and testing.

---

## Future Improvements

- Implement bi-directional motor control based on distance range
- Add safety timeout using watchdog timer (WDT)
- Display motor status on LCD
- Integrate keypad for control or configuration

---

## License

This project is open-source and available under the MIT License.

---

## Author

Eyad  
Embedded Systems Developer | [LinkedIn](#) | [GitHub](#)
