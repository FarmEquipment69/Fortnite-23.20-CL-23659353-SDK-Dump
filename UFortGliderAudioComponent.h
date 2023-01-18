// Class /Script/FortniteGame.FortGliderAudioComponent
// Size: 0xc90
class UFortGliderAudioComponent : public UFortLayeredAudioComponent
{
	bool bDebugIgnoreFullyDeployed; // 0xc80 (0x1)
	unsigned char unreflected_c81[0x7]; // 0xc81 (0x7) 
	class AFortPlayerParachute* PlayerParachute; // 0xc88 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGliderAudioComponent.UpdateGliderAudio (Underlying native function: UpdateGliderAudio 0x8e613dc)
	void UpdateGliderAudio(float& ForwardDot, float& RightDot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGliderAudioComponent.IsParachuteFullyDeployed (Underlying native function: IsParachuteFullyDeployed 0x8e5f97c)
	bool IsParachuteFullyDeployed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

