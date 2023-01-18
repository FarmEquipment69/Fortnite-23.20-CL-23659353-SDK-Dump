// Class /Script/SBDanceVolume.SBDanceVolumeLibrary
// Size: 0x28
class USBDanceVolumeLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SBDanceVolume.SBDanceVolumeLibrary.SetWholeMontageLooping (Underlying native function: SetWholeMontageLooping 0x55a7760)
	static void SetWholeMontageLooping(class UAnimInstance*& Anim, class UAnimMontage*& Montage); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SBDanceVolume.SBDanceVolumeLibrary.IsMontageSetupForDanceVolumeLooping (Underlying native function: IsMontageSetupForDanceVolumeLooping 0x55a7310)
	static bool IsMontageSetupForDanceVolumeLooping(class UAnimMontage*& Montage); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SBDanceVolume.SBDanceVolumeLibrary.GetLastEmoteExecuted (Underlying native function: GetLastEmoteExecuted 0x55a71c0)
	static class UFortItemDefinition* GetLastEmoteExecuted(class AController*& Controller); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SBDanceVolume.SBDanceVolumeLibrary.ForceStopMontage (Underlying native function: ForceStopMontage 0x55a70d0)
	static void ForceStopMontage(class AFortPawn*& FortPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SBDanceVolume.SBDanceVolumeLibrary.CalculateDanceMontagePlayRateWithMusicClock (Underlying native function: CalculateDanceMontagePlayRateWithMusicClock 0x55a6ec0)
	static float CalculateDanceMontagePlayRateWithMusicClock(class UMusicClockComponent*& MusicClock, class UAnimMontage*& Montage, float& MontageBeatLength); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SBDanceVolume.SBDanceVolumeLibrary.CalculateDanceMontagePlayInfoWithMusicPlayer (Underlying native function: CalculateDanceMontagePlayInfoWithMusicPlayer 0x55a6cd0)
	static struct FDanceMontagePlayInfo CalculateDanceMontagePlayInfoWithMusicPlayer(class UMusicPlayerComponentBase*& MusicPlayer, class UAnimMontage*& Montage, struct FMusicalTimeSpan& MontageTimeInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/SBDanceVolume.SBDanceVolumeLibrary.CalculateDanceMontagePlayInfoWithMusicClock (Underlying native function: CalculateDanceMontagePlayInfoWithMusicClock 0x55a6b50)
	static struct FDanceMontagePlayInfo CalculateDanceMontagePlayInfoWithMusicClock(class UMusicClockComponent*& MusicClock, class UAnimMontage*& Montage, struct FMusicalTimeSpan& MontageTimeInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

