// Class /Script/SoundLibrary.SoundLibraryComponent
// Size: 0xe0
class USoundLibraryComponent : public UAudioGameplayComponent
{
	unsigned char unreflected_a8[0x8]; // 0xa8 (0x8) 
	struct FMulticastInlineDelegate OnSoundLibraryPlayEvent; // 0xb0 (0x10)
	struct TArray<class USoundLibrary*> Libraries; // 0xc0 (0x10)
	struct TArray<class UClass*> ContextClasses; // 0xd0 (0x10)
};

