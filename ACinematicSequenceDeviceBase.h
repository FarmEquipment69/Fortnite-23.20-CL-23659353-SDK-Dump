// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
// Size: 0xf30
class ACinematicSequenceDeviceBase : public ABuildingProp
{
	unsigned char unreflected_ee8[0x20]; // 0xee8 (0x20) 
	class ULevelSequence* Sequence; // 0xf08 (0x8)
	class ALevelSequenceActor* LevelSequenceActor; // 0xf10 (0x8)
	class AFortPlayerController* InstigatingController; // 0xf18 (0x8)
	unsigned char InstigatingTeam; // 0xf20 (0x1)
	unsigned char unreflected_f21[0x3]; // 0xf21 (0x3) 
	unsigned char bLoopPlayback; // 0xf24 (0x1)
	unsigned char bRestoreState; // 0xf24 (0x1)
	unsigned char bAutoPlay; // 0xf24 (0x1)
	unsigned char unreflected_f25[0x3]; // 0xf25 (0x3) 
	enum EFortMinigameState AutoPlayMinigameState; // 0xf28 (0x1)
	enum ECinematicSequenceVisibility Visibility; // 0xf29 (0x1)
	bool bLevelSequenceActorAlwaysRelevant; // 0xf2a (0x1)
	unsigned char padding_f2b[0x5]; // 0xf2b (0x5)

	/* Functions */

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop (Underlying native function: Stop 0x735ea8c)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Play (Underlying native function: Play 0x735ea78)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause (Underlying native function: Pause 0x735ea50)
	void Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated (Underlying native function: HandleSequencePlayerCreated 0x7216960)
	void HandleSequencePlayerCreated(class ULevelSequencePlayer*& Player); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer (Underlying native function: GetSequencePlayer 0x735ea30)
	class UMovieSceneSequencePlayer* GetSequencePlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

