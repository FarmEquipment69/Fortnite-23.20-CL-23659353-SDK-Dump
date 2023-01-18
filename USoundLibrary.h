// Class /Script/SoundLibrary.SoundLibrary
// Size: 0x148
class USoundLibrary : public UObject
{
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class USoundBase>> Sounds; // 0x28 (0x50)
	struct FAudioGameplayRequirements LibraryRequirements; // 0x78 (0x50)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class USoundBase>> FullLibrary; // 0xc8 (0x50)
	struct TArray<class USoundBase*> LoadedSoundObjects; // 0x118 (0x10)
	struct TArray<struct TWeakObjectPtr<class USoundBase>> Assets; // 0x128 (0x10)
	unsigned char padding_138[0x10]; // 0x138 (0x10)
};

