cmake_minimum_required(VERSION 3.7)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(
        ModernCMakeExample
        VERSION 1.0
        LANGUAGES CXX)


add_subdirectory(JUCE)

juce_add_plugin(Synth
        VERSION 0.0.1                               # Set this if the plugin version is different to the project version
        ICON_BIG  Images/TheHikerLife.png                           # ICON_* arguments specify a path to an image file to use as an icon for the Standalone
        ICON_SMALL Images/TheHikerLife.png
        COMPANY_NAME TheHikerLife                         # Specify the name of the plugin's author
        IS_SYNTH TRUE                    # Is this a synth or an effect?
        NEEDS_MIDI_INPUT TRUE               # Does the plugin need midi input?
        NEEDS_MIDI_OUTPUT FALSE              # Does the plugin need midi output?
        IS_MIDI_EFFECT FALSE                 # Is this plugin a MIDI effect?
        EDITOR_WANTS_KEYBOARD_FOCUS TRUE    # Does the editor need keyboard focus?
        COPY_PLUGIN_AFTER_BUILD FALSE        # Should the plugin be installed to a default location after building?
        PLUGIN_MANUFACTURER_CODE Thl             # A four-character manufacturer id with at least one upper-case character
        PLUGIN_CODE Dem0   Thl                      # A unique four-character plugin id with exactly one upper-case character
        # GarageBand 10.3 requires the first letter to be upper-case, and the remaining letters to be lower-case
        FORMATS Standalone                  # The formats to build. Other valid formats are: AAX Unity VST AU AUv3
        PRODUCT_NAME "Synth")

# see this https://github.com/juce-framework/JUCE/blob/master/examples/CMake/AudioPlugin/CMakeLists.txt
# to make vst
#everything for standalone etc... is on the github Juce



