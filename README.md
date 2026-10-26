# Wwise × Unreal Engine 5: Village Soundscape

An Unreal Engine 5.3 project where I implemented the full environmental and character audio for a medieval lakeside village using Wwise.

▶️ **[Watch the demo video](https://www.youtube.com/watch?v=BbBrQCV-NZo)**

## What's implemented

- **Surface-aware footsteps:** physics materials for dirt, grass, stone, water, and wood drive the character's footstep sounds, layered with clothing Foley
- **Character movement:** jump and landing sounds
- **Ambient zones:** forest, lakeside, and wind beds, with layered wildlife (birdcalls, crickets, cicadas, crows, geese, seagulls, chickens)
- **Positioned emitters:** windmill and mill interior, church bells and organ, campfire, wood chopping, a barking dog, market music, and crowd chatter
- **Room acoustics:** reverb for small rooms, medium rooms, and the church, set up through Wwise's geometry surface properties and reverb assignment tables

## Tech

Unreal Engine 5.3 · Wwise (Unreal integration) · Blueprints · C++

## Project layout

| Path | Contents |
| --- | --- |
| `WwiseUE5/WwiseUE5.uproject` | Unreal project |
| `WwiseUE5/WwiseUE5_WwiseProject/` | Wwise authoring project (events, switches, states, game parameters) |
| `WwiseUE5/Content/WwiseAudio/` | Wwise events, banks, and physical-material audio assets in Unreal |

## Running it

1. Install Unreal Engine 5.3 and a Wwise version with the matching Unreal integration.
2. Open `WwiseUE5/WwiseUE5_WwiseProject` in Wwise and generate SoundBanks.
3. Open `WwiseUE5/WwiseUE5.uproject` in Unreal and press Play.
