// ScriptStruct /Script/Engine.ActiveCameraShakeInfo
// Size: 0x18
struct FActiveCameraShakeInfo
{
	class UCameraShakeBase* ShakeInstance; // 0x0 (0x8)
	struct TWeakObjectPtr<class UCameraShakeSourceComponent> ShakeSource; // 0x8 (0x8)
	bool bIsCustomInitialized; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

