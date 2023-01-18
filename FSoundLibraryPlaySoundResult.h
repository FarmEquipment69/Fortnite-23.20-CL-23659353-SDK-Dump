// ScriptStruct /Script/SoundLibrary.SoundLibraryPlaySoundResult
// Size: 0x28
struct FSoundLibraryPlaySoundResult
{
	struct FGameplayTag EventName; // 0x0 (0x4)
	bool bWasBlocked; // 0x4 (0x1)
	bool bSuccess; // 0x5 (0x1)
	unsigned char unreflected_6[0x12]; // 0x6 (0x12) 
	struct TArray<class UAudioComponent*> AudioComponents; // 0x18 (0x10)
};

