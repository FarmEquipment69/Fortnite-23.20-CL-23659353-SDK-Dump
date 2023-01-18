// Class /Script/FortniteGame.FortPlayerFoleyContext
// Size: 0xb0
class UFortPlayerFoleyContext : public USoundLibraryContext
{
	struct FFortPlayerFoleyContextSettings PlayerFoleySettings; // 0x58 (0x10)
	bool bPlaySoundFromNative; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	class UInitialActiveSoundParams* AudioParams; // 0x70 (0x8)
	struct TWeakObjectPtr<class UFortSoundIndicatorComponent> SoundIndicator; // 0x78 (0x8)
	unsigned char padding_80[0x30]; // 0x80 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerFoleyContext.ConfigureContext (Underlying native function: ConfigureContext 0x8e5d8e4)
	void ConfigureContext(class AActor*& OwningActor, struct FFortPlayerFoleyContextSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

