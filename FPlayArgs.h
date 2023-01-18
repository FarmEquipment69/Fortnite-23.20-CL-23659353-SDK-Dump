// ScriptStruct /Script/HmxAudio.PlayArgs
// Size: 0x40
struct FPlayArgs
{
	class UMusicEmitterComponent* Emitter; // 0x8 (0x8)
	bool paused; // 0x10 (0x1)
	bool muted; // 0x11 (0x1)
	unsigned char unreflected_12[0x2]; // 0x12 (0x2) 
	struct FInitialVolumeSettings volumeSettings; // 0x14 (0x10)
	struct FName RenderTarget; // 0x24 (0x4)
	struct FName mixPreset; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FAudioParam> initialParams; // 0x30 (0x10)
};

