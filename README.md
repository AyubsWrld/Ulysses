# Ulysses

 > ### “Bind me to the mast, and if I beg you to release me, tighten the ropes still more.”
> — Odysseus, The Odyssey

A lightweight networking tool designed to introduce accountability and control into home networks by placing a small device directly between a user and the rest of their network. The system is intended to run on a Raspberry Pi, which acts as an intermediary between a client device and the upstream router. By sitting in the middle of the connection, Ulysses can observe network behavior and selectively block traffic when necessary, allowing users to enforce simple network policies on otherwise unmanaged consumer networks.

The motivation for the project comes from a common limitation of consumer networking equipment: most home routers provide very little transparency or control over how individual devices behave on the network. While enterprise systems offer advanced monitoring and filtering capabilities, these features are typically absent from low-cost home hardware. Ulysses explores how similar ideas can be implemented on inexpensive devices such as the Raspberry Pi.

# Purpose
Ulysses is intended as an experimental platform for building accountability-focused networking tools on consumer hardware. By combining packet inspection, device discovery, and traffic blocking, the project explores how small programmable devices can provide capabilities typically associated with enterprise networking environments.

# Disclaimer
Ulysses interacts directly with network traffic and can block or interfere with communications. It should only be used on networks where you have permission to monitor and control traffic.

