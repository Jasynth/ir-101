/*

    IMPORTANT! This file is auto-generated each time you save your
    project - if you alter its contents, your changes may be overwritten!

    This is the header file that your files should include in order to get all the
    JUCE library headers. You should avoid including the JUCE headers directly in
    your own source files, because that wouldn't pick up the correct configuration
    options for your app.

*/

#pragma once

#include "AppConfig.h"

#include <hi_core/hi_core.h>
#include <hi_frontend/hi_frontend.h>
#include <hi_scripting/hi_scripting.h>
#include <hi_modules/hi_modules.h>
#include <hi_dsp_library/hi_dsp_library.h>
#include <hi_lac/hi_lac.h>
#include <hi_sampler/hi_sampler.h>
#include <hi_components/hi_components.h>
#include <hi_dsp/hi_dsp.h>
#include <hi_zstd/hi_zstd.h>
#include <hi_streaming/hi_streaming.h>
#include <hi_tools/hi_tools.h>
#include <juce_audio_basics/juce_audio_basics.h>
#include <juce_audio_devices/juce_audio_devices.h>
#include <juce_dsp/juce_dsp.h>
#include <juce_audio_formats/juce_audio_formats.h>
#include <juce_audio_plugin_client/juce_audio_plugin_client.h>
#include <juce_audio_processors/juce_audio_processors.h>
#include <juce_audio_utils/juce_audio_utils.h>
#include <juce_core/juce_core.h>
#include <juce_cryptography/juce_cryptography.h>
#include <juce_data_structures/juce_data_structures.h>
#include <juce_events/juce_events.h>
#include <juce_graphics/juce_graphics.h>
#include <juce_gui_basics/juce_gui_basics.h>
#include <juce_gui_extra/juce_gui_extra.h>
#include <juce_product_unlocking/juce_product_unlocking.h>
#include <juce_opengl/juce_opengl.h>

#include "BinaryData.h"

#if ! DONT_SET_USING_JUCE_NAMESPACE
 // If your code uses a lot of JUCE classes, then this will obviously save you
 // a lot of typing, but can be disabled by setting DONT_SET_USING_JUCE_NAMESPACE.
 using namespace juce;
#endif

#if ! JUCE_DONT_DECLARE_PROJECTINFO
namespace ProjectInfo
{
    const char* const  projectName    = "IR 101";
    const char* const  companyName    = "In Reach Ent";
    const char* const  versionString  = "1.0.1";
    const int          versionNumber  = 0x10001;
}
#endif