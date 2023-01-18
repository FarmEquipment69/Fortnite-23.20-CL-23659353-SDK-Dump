// Class /Script/HmxAudio.HarmonixHandleUtil
// Size: 0x28
class UHarmonixHandleUtil : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HmxAudio.HarmonixHandleUtil.MusicHandleIsValid (Underlying native function: MusicHandleIsValid 0x544cb90)
	static bool MusicHandleIsValid(class UMusicHandle*& MusicHandle, enum EHarmonixHandleValidity& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandleUtil.IsMusic (Underlying native function: IsMusic 0x544cb90)
	static bool IsMusic(class UHarmonixHandle*& HarmonixHandle, enum EHarmonixHandleValidity& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandleUtil.IsInstrument (Underlying native function: IsInstrument 0x544c960)
	static bool IsInstrument(class UHarmonixHandle*& HarmonixHandle, enum EHarmonixHandleValidity& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandleUtil.InstrumentHandleIsValid (Underlying native function: InstrumentHandleIsValid 0x544c960)
	static bool InstrumentHandleIsValid(class UInstrumentHandle*& InstrumentHandle, enum EHarmonixHandleValidity& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandleUtil.HarmonixHandleIsValid (Underlying native function: HarmonixHandleIsValid 0x544c4f0)
	static bool HarmonixHandleIsValid(class UHarmonixHandle*& HarmonixHandle, enum EHarmonixHandleValidity& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandleUtil.CastToMusicHandle (Underlying native function: CastToMusicHandle 0x54453e0)
	static class UMusicHandle* CastToMusicHandle(class UObject*& worldContextObj, class UHarmonixHandle*& H, enum EHarmonixHandleValidity& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandleUtil.CastToInstrumentHandle (Underlying native function: CastToInstrumentHandle 0x5445230)
	static class UInstrumentHandle* CastToInstrumentHandle(class UObject*& worldContextObj, class UHarmonixHandle*& H, enum EHarmonixHandleValidity& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

