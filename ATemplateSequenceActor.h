// Class /Script/TemplateSequence.TemplateSequenceActor
// Size: 0x2e0
class ATemplateSequenceActor : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x290 (0x20)
	class UTemplateSequencePlayer* SequencePlayer; // 0x2b0 (0x8)
	struct FSoftObjectPath TemplateSequence; // 0x2b8 (0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x2d0 (0xc)
	unsigned char padding_2dc[0x4]; // 0x2dc (0x4)

	/* Functions */

	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence (Underlying native function: SetSequence 0x71f39e8)
	void SetSequence(class UTemplateSequence*& InSequence); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding (Underlying native function: SetBinding 0x71f3854)
	void SetBinding(class AActor*& Actor, bool& bOverridesDefault); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence (Underlying native function: LoadSequence 0x71f3808)
	class UTemplateSequence* LoadSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer (Underlying native function: GetSequencePlayer 0x71f37dc)
	class UTemplateSequencePlayer* GetSequencePlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence (Underlying native function: GetSequence 0x71f37b8)
	class UTemplateSequence* GetSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

