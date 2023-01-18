// Class /Script/SoundLibrary.SoundLibraryAnimContext
// Size: 0x98
class USoundLibraryAnimContext : public USoundLibraryContext
{
	struct FSoundLibraryAnimContextSettings AnimSettings; // 0x58 (0x24)
	struct TWeakObjectPtr<class UAnimSequenceBase> Animation; // 0x7c (0x8)
	struct TWeakObjectPtr<class USkeletalMeshComponent> MeshComponent; // 0x84 (0x8)
	bool bSupportsNotifyEnd; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	float AnimRate; // 0x90 (0x4)
	unsigned char padding_94[0x4]; // 0x94 (0x4)

	/* Functions */

	// Function /Script/SoundLibrary.SoundLibraryAnimContext.ConfigureContext (Underlying native function: ConfigureContext 0x7df3fa8)
	void ConfigureContext(class AActor*& OwningActor, class UAnimSequenceBase*& InAnimation, struct FSoundLibraryAnimContextSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

