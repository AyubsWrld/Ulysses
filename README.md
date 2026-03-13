# Ulysses

 > ### “Bind me to the mast, and if I beg you to release me, tighten the ropes still more.”
> — Odysseus, The Odyssey

Ulysses is a personal network security system designed to give individuals the kind of infrastructure-level control over their internet access that was previously only available to large enterprises. The system runs on a Raspberry Pi positioned inline between a user's devices and their upstream router. By sitting physically in the path of all network traffic, Ulysses becomes the mandatory checkpoint through which every packet must pass. This physical placement is what makes Ulysses fundamentally different from software-based solutions, which can be uninstalled, bypassed, or defeated in moments of weakness.

At its core Ulysses combines several established networking technologies into a unified and opinionated system. DNS-level filtering which makes blocked domains invisible at the resolution layer. A transparent proxy which inspects and filters traffic that passes DNS checks. And a mandatory always-on VPN tunnel beyond the home network that ensures that filtering rules follow the user's devices onto mobile data, public WiFi, and any other network they encounter. A cloud watchdog server monitors the Pi's heartbeat continuously, detects anomalies, and coordinates the system's graduated response when bypass attempts are identified.

The system is designed around a specific threat model: not the determined sophisticated attacker with unlimited time, but the impulsive moment of weakness that undermines genuine long-term commitment. The initial focus of the system is internet addiction — specifically compulsive consumption of content that the user themselves has identified as harmful to their wellbeing. The architecture is intentionally narrow at this stage, prioritising depth of protection over breadth of features. The blocklist, response system, and user experience are all optimised for this specific use case before expanding to adjacent applications.

# Purpose
Ulysses is intended as an experimental platform for building accountability-focused networking tools on consumer hardware. By combining packet inspection, device discovery, and traffic blocking, the project explores how small programmable devices can provide capabilities typically associated with enterprise networking environments.

# Disclaimer
Ulysses interacts directly with network traffic and can potentially block or interfere with communications. It should only be used on networks where you have permission to monitor and control traffic.

