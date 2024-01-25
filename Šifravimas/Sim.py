# PROGRAMOS Sim.py KODAS


# Sim.py generuoja simetrinį raktą key.bin
from cryptography.fernet import Fernet


# Sugeneruojame simetrinį raktą
key = Fernet.generate_key()


# Išsaugome raktą į key.bin failą
with open("key.bin", "wb") as key_file:
    key_file.write(key)

print(f"Raktas sugeneruotas ir išsaugotas į key.bin: {key}")