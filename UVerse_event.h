// VerseClass /Verse/_Verse/VNI/Verse.Verse_event
// Size: 0x80
class UVerse_event : public UObject
{
	unsigned char verse0x57187737L2fVerse2eorg2fVerse2fevent2feventLtRNRGetAwaitCount_28[0x10]; // 0x28 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char unreflected_38[0x10]; // 0x38 (0x10) 
	unsigned char verse0x8DE7DBE5Await_48[0x10]; // 0x48 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x7260621DL2fVerse2eorg2fVerse2fsignalable2fsignalableLtRNRSignalLNtR_38[0x10]; // 0x38 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char padding_48[0x38]; // 0x48 (0x38)

	/* Functions */

	// Function /Verse/_Verse/VNI/Verse.Verse_event._L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lt_R_N_RSignal_L_Nt_R (Underlying native function: _L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lt_R_N_RSignal_L_Nt_R 0x6aac2e4)
	void L2fVerse2eorg2fVerse2fsignalable2fsignalableLtRNRSignalLNtR(); // (Native | Public | BlueprintCallable)

	// Function /Verse/_Verse/VNI/Verse.Verse_event._L_2fVerse_2eorg_2fVerse_2fevent_2fevent_Lt_R_N_RGetAwaitCount (Underlying native function: _L_2fVerse_2eorg_2fVerse_2fevent_2fevent_Lt_R_N_RGetAwaitCount 0x6aac2dc)
	int64_t L2fVerse2eorg2fVerse2fevent2feventLtRNRGetAwaitCount(struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Verse/_Verse/VNI/Verse.Verse_event.Await (Has no native function)
	class UConcurrency_task* Await(class UConcurrency_task*& verse0xC1E81372CallingTask, int64_t& verse0xA3A00DDBCallerResumeState, int64_t& verse0x2AC0E4D8CallerCancelState, struct Ftuple_L_R& verse0xB2CDDD72Argument); // (Public | HasOutParms | BlueprintCallable)

	// Function /Verse/_Verse/VNI/Verse.Verse_event.$InitInstance (Has no native function)
	void $InitInstance(); // ()

	// Function /Verse/_Verse/VNI/Verse.Verse_event.$Block (Has no native function)
	void $Block(); // ()

	// Function /Verse/_Verse/VNI/Verse.Verse_event.$InitCDO (Has no native function)
	void $InitCDO(); // ()
};

