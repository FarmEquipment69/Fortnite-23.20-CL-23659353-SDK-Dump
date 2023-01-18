// Class /Script/GeometryCache.GeometryCacheComponent
// Size: 0x610
class UGeometryCacheComponent : public UMeshComponent
{
	class UGeometryCache* GeometryCache; // 0x580 (0x8)
	bool bRunning; // 0x588 (0x1)
	bool bLooping; // 0x589 (0x1)
	bool bExtrapolateFrames; // 0x58a (0x1)
	unsigned char unreflected_58b[0x1]; // 0x58b (0x1) 
	float StartTimeOffset; // 0x58c (0x4)
	float PlaybackSpeed; // 0x590 (0x4)
	float MotionVectorScale; // 0x594 (0x4)
	int numTracks; // 0x598 (0x4)
	float ElapsedTime; // 0x59c (0x4)
	unsigned char unreflected_5a0[0x4c]; // 0x5a0 (0x4c) 
	float Duration; // 0x5ec (0x4)
	bool bManualTick; // 0x5f0 (0x1)
	bool bOverrideWireframeColor; // 0x5f1 (0x1)
	unsigned char unreflected_5f2[0x2]; // 0x5f2 (0x2) 
	struct FLinearColor WireframeOverrideColor; // 0x5f4 (0x10)
	unsigned char padding_604[0xc]; // 0x604 (0xc)

	/* Functions */

	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime (Underlying native function: TickAtThisTime 0x5b223a0)
	void TickAtThisTime(float& Time, bool& bInIsRunning, bool& bInBackwards, bool& bInIsLooping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.Stop (Underlying native function: Stop 0x5b22380)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor (Underlying native function: SetWireframeOverrideColor 0x5b222f0)
	void SetWireframeOverrideColor(struct FLinearColor& Color); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset (Underlying native function: SetStartTimeOffset 0x5b22230)
	void SetStartTimeOffset(float& NewStartTimeOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed (Underlying native function: SetPlaybackSpeed 0x5b22160)
	void SetPlaybackSpeed(float& NewPlaybackSpeed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor (Underlying native function: SetOverrideWireframeColor 0x5b220c0)
	void SetOverrideWireframeColor(bool& bOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale (Underlying native function: SetMotionVectorScale 0x5b21ff0)
	void SetMotionVectorScale(float& NewMotionVectorScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping (Underlying native function: SetLooping 0x5b21e90)
	void SetLooping(bool& bNewLooping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache (Underlying native function: SetGeometryCache 0x5b21de0)
	bool SetGeometryCache(class UGeometryCache*& NewGeomCache); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames (Underlying native function: SetExtrapolateFrames 0x5b21d40)
	void SetExtrapolateFrames(bool& bNewExtrapolating); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd (Underlying native function: PlayReversedFromEnd 0x5b21ce0)
	void PlayReversedFromEnd(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed (Underlying native function: PlayReversed 0x5b21c90)
	void PlayReversed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart (Underlying native function: PlayFromStart 0x5b21c30)
	void PlayFromStart(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.Play (Underlying native function: Play 0x5b21be0)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.Pause (Underlying native function: Pause 0x5b21bb0)
	void Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed (Underlying native function: IsPlayingReversed 0x5b21b70)
	bool IsPlayingReversed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying (Underlying native function: IsPlaying 0x5b21b50)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping (Underlying native function: IsLooping 0x5b21b30)
	bool IsLooping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames (Underlying native function: IsExtrapolatingFrames 0x5b21b10)
	bool IsExtrapolatingFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor (Underlying native function: GetWireframeOverrideColor 0x5b21ae0)
	struct FLinearColor GetWireframeOverrideColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset (Underlying native function: GetStartTimeOffset 0x5b21ac0)
	float GetStartTimeOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed (Underlying native function: GetPlaybackSpeed 0x5b21a80)
	float GetPlaybackSpeed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection (Underlying native function: GetPlaybackDirection 0x5b21a60)
	float GetPlaybackDirection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor (Underlying native function: GetOverrideWireframeColor 0x5b21a40)
	bool GetOverrideWireframeColor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames (Underlying native function: GetNumberOfFrames 0x5b21a00)
	int GetNumberOfFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale (Underlying native function: GetMotionVectorScale 0x5b219c0)
	float GetMotionVectorScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration (Underlying native function: GetDuration 0x5b21980)
	float GetDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime (Underlying native function: GetAnimationTime 0x5b21930)
	float GetAnimationTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

