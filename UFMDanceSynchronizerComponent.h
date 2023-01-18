// Class /Script/SBDanceVolume.FMDanceSynchronizerComponent
// Size: 0xe8
class UFMDanceSynchronizerComponent : public UActorComponent
{
	unsigned char bShouldHalfOrDoubleTimeDances; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct FMusicalTimeSpan DanceTimeSpan; // 0xa4 (0x10)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	class UMusicClockComponent* MusicClock; // 0xb8 (0x8)
	class AFortPlayerPawn* OwnerPlayerPawn; // 0xc0 (0x8)
	class USkeletalMeshComponent* OwnerMeshComponent; // 0xc8 (0x8)
	bool bMusicSyncEnabled; // 0xd0 (0x1)
	bool bStopAudioComplete; // 0xd1 (0x1)
	unsigned char unreflected_d2[0x6]; // 0xd2 (0x6) 
	struct TArray<struct FName> EmoteSoundIds; // 0xd8 (0x10)

	/* Functions */

	// Function /Script/SBDanceVolume.FMDanceSynchronizerComponent.StopOwnerEmoteAudio (Underlying native function: StopOwnerEmoteAudio 0x55a7900)
	void StopOwnerEmoteAudio(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SBDanceVolume.FMDanceSynchronizerComponent.SetMusicSyncEnabled (Underlying native function: SetMusicSyncEnabled 0x55a7660)
	void SetMusicSyncEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SBDanceVolume.FMDanceSynchronizerComponent.SetMusicClockReference (Underlying native function: SetMusicClockReference 0x55a75c0)
	void SetMusicClockReference(class UMusicClockComponent*& MusicClockComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SBDanceVolume.FMDanceSynchronizerComponent.SetDanceMusicalTimeInfo (Underlying native function: SetDanceMusicalTimeInfo 0x55a7510)
	void SetDanceMusicalTimeInfo(struct FMusicalTimeSpan& TimeSpanInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SBDanceVolume.FMDanceSynchronizerComponent.IsMusisSyncEnabled (Underlying native function: IsMusisSyncEnabled 0x55a74f0)
	bool IsMusisSyncEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SBDanceVolume.FMDanceSynchronizerComponent.GetOwnerSkeletalMeshComponent (Underlying native function: GetOwnerSkeletalMeshComponent 0x55a72f0)
	class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SBDanceVolume.FMDanceSynchronizerComponent.GetOwnerFortPlayerPawn (Underlying native function: GetOwnerFortPlayerPawn 0x55a72d0)
	class AFortPlayerPawn* GetOwnerFortPlayerPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

