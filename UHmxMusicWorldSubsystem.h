// Class /Script/HmxAudio.HmxMusicWorldSubsystem
// Size: 0x78
class UHmxMusicWorldSubsystem : public UWorldSubsystem
{
	unsigned char unreflected_30[0x20]; // 0x30 (0x20) 
	class AActor* WorldDefaultMusicEmitterActor; // 0x50 (0x8)
	class UMusicEmitterComponent* WorldDefaultMusicEmitterComponent; // 0x58 (0x8)
	unsigned char unreflected_60[0x8]; // 0x60 (0x8) 
	struct TArray<class UMusicPlayerComponentBase*> EditorMusicPlayers; // 0x68 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.HmxMusicWorldSubsystem.OnAuditionTimeout (Underlying native function: OnAuditionTimeout 0x544f200)
	void OnAuditionTimeout(); // (Final | Native | Private)
};

