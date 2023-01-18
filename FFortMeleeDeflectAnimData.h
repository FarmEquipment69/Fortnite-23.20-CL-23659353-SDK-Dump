// ScriptStruct /Script/FortniteGame.FortMeleeDeflectAnimData
// Size: 0x28
struct FFortMeleeDeflectAnimData
{
	class UAnimSequence* EntryFromGuardAnim; // 0x0 (0x8)
	class UAnimSequence* HoldAnim; // 0x8 (0x8)
	class UAnimSequence* ExitToGuardAnim; // 0x10 (0x8)
	struct TArray<struct FFortMeleeDeflectTransitionAnimData> TransitionsToNextDeflection; // 0x18 (0x10)
};

