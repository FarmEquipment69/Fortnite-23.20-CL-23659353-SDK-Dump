// Class /Script/HmxAudio.MusicalEventRouterComponentBase
// Size: 0xc8
class UMusicalEventRouterComponentBase : public UActorComponent
{
	bool oneShot; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UMusicHandle>> handleAttachments; // 0xa8 (0x10)
	struct TArray<class UMusicPlayerComponentBase*> clipAttachmnents; // 0xb8 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.MusicalEventRouterComponentBase.IsAttached (Underlying native function: IsAttached 0x544cb30)
	bool IsAttached(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalEventRouterComponentBase.DetachFromMusicHandle (Underlying native function: DetachFromMusicHandle 0x5447d30)
	bool DetachFromMusicHandle(class UMusicHandle*& Handle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalEventRouterComponentBase.DetachFromAllMusicHandles (Underlying native function: DetachFromAllMusicHandles 0x5447d10)
	void DetachFromAllMusicHandles(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalEventRouterComponentBase.AttachToMusicHandle (Underlying native function: AttachToMusicHandle 0x5444b30)
	bool AttachToMusicHandle(class UMusicHandle*& Handle); // (Final | Native | Public | BlueprintCallable)
};

