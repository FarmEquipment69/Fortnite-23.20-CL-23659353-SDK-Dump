// ScriptStruct /Script/HmxAudio.PlayInstrumentArgs
// Size: 0x78
struct FPlayInstrumentArgs : FPlayArgs
{
	enum FInstrumentRenderMode renderMode; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	class UInstrumentHandle* parentHandle; // 0x48 (0x8)
	struct TWeakObjectPtr<class USynthesizerPatchAssetBase> playableAsset; // 0x50 (0x28)
};

