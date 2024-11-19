# slock - Simple X Screen Locker

`slock` is a minimalistic X display locker for Unix-based systems. It is designed to be lightweight, secure, and simple, providing a lock screen that only unlocks with the correct password.

## Features

- **Minimal Design**: No unnecessary frills, just a lock screen.
- **Secure**: Relies on Unix password management for authentication.
- **Customizable**: Easy to modify and extend with patches.

## Recent Changes

### Modifier Key Handling
- Updated key handling to ignore `Shift`, `Ctrl`, `Alt`, and other modifier keys when entering a password. This resolves aesthetic inconsistencies where pressing these keys would incorrectly show the "wrong password" state.

### Multi Shapes Patch
- Implemented the **Multi Shapes** patch, inspired by the **Squares** patch.
  - **Functionality**: Instead of changing the color of the entire screen to indicate lock state, it renders a shape for each character in the password input. The shape's color changes to indicate different states (e.g., input or failure).
  - **Requirements**: Xrandr must be active. Defaults to original slock behavior if Xrandr is not available.
  - **Configuration**: Use `shapesize` in `config.def.h` to adjust the size of the shapes.

## Installation

1. Clone the repository:
   ```bash
   git clone git@github.com:myhat2you/slock.git
   cd slock
   ```
2. Apply any desired patches (e.g., `multishapes`).
3. Configure `config.def.h` as needed and build:
   ```bash
   sudo make install
   ```

## Usage

Run `slock` to lock your screen:
```bash
slock
```

You can also run it with a command to execute after locking:
```bash
slock <command>
```

## Customization

### Configurations
- Modify settings in `config.def.h` for size and behavior of shapes, colors, and more.

### Patches
- Apply additional patches to extend functionality. For example:
  - **Multi Shapes Patch**: Render a visual cue for each password character.
  - **Other Patches**: Visit the suckless community for more ideas.

## License

This project is licensed under the MIT license. See the `LICENSE` file for details.

---
