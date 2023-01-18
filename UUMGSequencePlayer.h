// Class /Script/UMG.UMGSequencePlayer
// Size: 0x330
class UUMGSequencePlayer : public UObject
{
	unsigned char unreflected_28[0x1f0]; // 0x28 (0x1f0) 
	class UWidgetAnimation* Animation; // 0x218 (0x8)
	unsigned char unreflected_220[0x8]; // 0x220 (0x8) 
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x228 (0x88)
	unsigned char padding_2b0[0x80]; // 0x2b0 (0x80)

	/* Functions */

	// Function /Script/UMG.UMGSequencePlayer.SetUserTag (Underlying native function: SetUserTag 0x9aefb24)
	void SetUserTag(struct FName& InUserTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UMGSequencePlayer.GetUserTag (Underlying native function: GetUserTag 0x9aecc7c)
	struct FName GetUserTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

