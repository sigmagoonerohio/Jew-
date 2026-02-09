#include "imgui.h"
#include "imgui_impl_gfx.h"
#include "imgui_impl_ios.h"

bool aimbotEnabled = false;

void renderGUI() {
    ImGui::Begin("Aimbot Controls");

    ImGui::Checkbox("Enable Aimbot", &aimbotEnabled);

    if (aimbotEnabled) {
        aimAtTarget();
    }

    ImGui::End();
}

void setupGUI() {
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui_ImplGfx_Init();
    ImGui_ImpliOS_Init();
}
