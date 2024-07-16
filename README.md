# mass_pm

A sample to combine zephyr/sampes/subsys/usb/mass and partition manager

## Build Instructions

Add build configuration

| Build Config      | Value                                 | Note:                                 |
| ----              | ----                                  | ----                                  |
| SDK               | v2.5.0                                | Just what I used. May work on others. |
| Board             | nrf52840dk_nrf52840                   | Just what I used. May work on others. |
| Configuration     | prj.conf                              | ----                                  |
| Overlay           | boards\nrf52840dk_nrf52840.overlay    | REQ: chosen nordic,pm-ext-flash       |
| Partitioning      | pm_static.yml                         | ----                                  |

## Credit where credit is due

Thank you to Michael Fierro. https://github.com/MiclFierro

