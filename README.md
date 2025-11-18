# Learn Pic Microcontroller 30 Days Challenge

## Course Snapshot

| Field | Details |
| --- | --- |
| Instructor | Ashraf S A AlMadhoun |
| Hardware Focus | PIC Microcontroller |
| Course Link | https://www.udemy.com |
| Repository Updated | 2025-11-18 |

## Overview

Learn Pic Microcontroller 30 Days Challenge is a hands-on course focused on practical PIC
Microcontroller development. This repository contains curated starter code, wiring notes,
and a repeatable workflow that mirrors the lessons from the video curriculum.

## Learning Objectives

- Understand the core goals of the **Learn Pic Microcontroller 30 Days Challenge** lessons.
- Map the theoretical material onto executable firmware samples.
- Practice reviewing telemetry / console logs with the provided samples.
- Customize the code to match your target hardware setup.

## Hardware & Components

Consult `CIRCUIT.md` for wiring notes. Typical builds require a development board,
sensors/actuators described in the Learn Pic Microcontroller 30 Days Challenge videos,
jumper wires, and a USB cable for programming plus logging.

## Setup Instructions

1. Install the latest Arduino IDE or your preferred toolchain.
2. Clone this repository or download it as a ZIP.
3. Review the `README.md`, `CIRCUIT.md`, and `data/` samples.
4. Upload the code to your dev board and monitor the serial console.

## Code Walkthrough

The `*.c` files are intentionally lightweight so you can focus on the core concept taught
in the course. Each file now includes metadata comments that summarize intent, I/O
expectations, and how telemetry maps to the lesson.

## Usage

```bash
# Build and inspect the sample on a desktop toolchain
gcc -Wall -Wextra -std=c11 *.c -o demo && ./demo

# Or upload via Arduino IDE to replicate the Learn Pic Microcontroller 30 Days Challenge lab
```

## Sample Data

Open `data/sample-telemetry.jsonl` to inspect representative console output. This is
useful when validating your hardware wiring or cloud logging pipeline.

## Additional Notes (Legacy Content)

# Learn PIC Microcontroller with this 30 Days Challenge (IoT Microcontrollers)

- Course: Learn PIC Microcontroller with this 30 Days Challenge
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/pic-microcontroller-learn-pic-microcontroller-30-days-challenge/?couponCode=JULYMAXDICOUNT

## Overview

Progress through daily topics including GPIO, timers, ADC, and UART for robust microcontroller skills.

## Purchase With Discount

Enroll using the link above to get a discounted price and grow your PIC microcontroller expertise.
