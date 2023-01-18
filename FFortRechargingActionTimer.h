// ScriptStruct /Script/FortniteGame.FortRechargingActionTimer
// Size: 0xd8
struct FFortRechargingActionTimer
{
	float ChargeRate; // 0xa8 (0x4)
	float ActiveExpenseRate; // 0xac (0x4)
	float PassiveExpenseRate; // 0xb0 (0x4)
	float MinActiveDuration; // 0xb4 (0x4)
	float MinActivationCharge; // 0xb8 (0x4)
	float ActiveCooldownTime; // 0xbc (0x4)
	float ChargeThreshold; // 0xc0 (0x4)
	float Charge; // 0xc4 (0x4)
	bool bIsActive; // 0xc8 (0x1)
	bool bIsCharging; // 0xc9 (0x1)
	bool bIsPassive; // 0xca (0x1)
	unsigned char padding_cb[0xd]; // 0xcb (0xd)
};

