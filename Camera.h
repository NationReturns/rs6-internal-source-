#pragma  once

#include "Vector3.h"

namespace Engine {
	class Camera {
	public:
		Vector3& GetViewRight();
		Vector3& GetViewUp();
		Vector3& GetViewForward();
		Vector3& GetViewTranslation();
		float GetViewFovX();
		float GetViewFovY();
		bool IsInGame();

		Vector3 WorldToScreen(Vector3& position);
	};
}