// Class /Script/HmxAudio.MidiMusicAsset
// Size: 0x218
class UMidiMusicAsset : public UMusicAssetBase
{
	unsigned char unreflected_e8[0x8]; // 0xe8 (0x8) 
	class UMidiFileAsset* MidiFileAsset; // 0xf0 (0x8)
	unsigned char unreflected_f8[0x8]; // 0xf8 (0x8) 
	struct FString MidiMusicPath; // 0x100 (0x10)
	unsigned char unreflected_110[0x10]; // 0x110 (0x10) 
	struct TMap<struct FName, class UFusionPatchAsset*> FusionPatchMap; // 0x120 (0x50)
	struct TMap<struct FName, class UDaggerPatchAsset*> DaggerPatchMap; // 0x170 (0x50)
	struct TMap<struct FName, struct FRemapRecord*> TrackRemaps; // 0x1c0 (0x50)
	unsigned char padding_210[0x8]; // 0x210 (0x8)
};

