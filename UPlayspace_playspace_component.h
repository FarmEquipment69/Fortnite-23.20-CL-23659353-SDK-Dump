// VerseClass /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component
// Size: 0x138
class UPlayspace_playspace_component : public UEntityComponent
{
	unsigned char unreflected_60[0x80]; // 0x60 (0x80) 
	unsigned char verse0xAAFD1B07L2fUnrealEngine2ecom2fPlayspace2fplayspacecomponentNRSetPlayerComponentClassLNanyR_e0[0x10]; // 0xe0 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x579A67A4WaitForMatchBegin_90[0x10]; // 0x90 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xB30FF5AFWaitForMatchEnd_a0[0x10]; // 0xa0 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xF324C2B5WaitForPlayerAdded_b0[0x10]; // 0xb0 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x74B0F4F3WaitForPlayerRemoved_c0[0x10]; // 0xc0 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x112880C6WaitForSetupComplete_80[0x10]; // 0x80 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x68A1B3A5L2fUnrealEngine2ecom2fPlayspace2fplayspacecomponentNRgetPlayerCountLNPlayerTypeR_70[0x10]; // 0x70 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0xC8D21C45L2fUnrealEngine2ecom2fPlayspace2fplayspacecomponentNRgetPlayersLNPlayerTypeR_60[0x10]; // 0x60 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char unreflected_70[0x60]; // 0x70 (0x60) 
	unsigned char verse0x4908ACA9L2fUnrealEngine2ecom2fPlayspace2fplayspacecomponentNRsetQueueUserForRespawnWhenAddedLNlogicR_d0[0x10]; // 0xd0 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char padding_e0[0x58]; // 0xe0 (0x58)

	/* Functions */

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R (Underlying native function: _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R 0x707f868)
	void L2fUnrealEngine2ecom2fPlayspace2fplayspacecomponentNRsetQueueUserForRespawnWhenAddedLNlogicR(unsigned char& verse0xB2CDDD72Argument); // (Native | Public | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R (Underlying native function: _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R 0x707f860)
	struct TArray<class USimulation_player_component*> L2fUnrealEngine2ecom2fPlayspace2fplayspacecomponentNRgetPlayersLNPlayerTypeR(enum Playspace_PlayerType& verse0xB2CDDD72Argument); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R (Underlying native function: _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R 0x707f858)
	int64_t L2fUnrealEngine2ecom2fPlayspace2fplayspacecomponentNRgetPlayerCountLNPlayerTypeR(enum Playspace_PlayerType& verse0xB2CDDD72Argument); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component.__WaitForSetupComplete (Has no native function)
	class UConcurrency_task* WaitForSetupComplete(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component.__WaitForPlayerRemoved (Has no native function)
	class UConcurrency_task* WaitForPlayerRemoved(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component.__WaitForPlayerAdded (Has no native function)
	class UConcurrency_task* WaitForPlayerAdded(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component.__WaitForMatchEnd (Has no native function)
	class UConcurrency_task* WaitForMatchEnd(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component.__WaitForMatchBegin (Has no native function)
	class UConcurrency_task* WaitForMatchBegin(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Nany_R (Underlying native function: _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Nany_R 0x707f850)
	void L2fUnrealEngine2ecom2fPlayspace2fplayspacecomponentNRSetPlayerComponentClassLNanyR(class UClass*& verse0xB2CDDD72Argument); // (Native | Public | BlueprintCallable)

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component.$InitInstance (Has no native function)
	void $InitInstance(); // ()

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component.$Block (Has no native function)
	void $Block(); // ()

	// Function /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component.$InitCDO (Has no native function)
	void $InitCDO(); // ()
};

