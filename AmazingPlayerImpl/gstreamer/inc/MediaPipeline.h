#include <gst/gst.h>
#include <iostream>
#include "mock.h"
/* Structure to contain all our information, so we can pass it to callbacks */
struct CustomData
{ 
  GstElement *playbin; /* Our one and only pipeline */
  GtkWidget *sink_widget;         /* The widget where our video will be displayed */
  GtkWidget *slider;              /* Slider widget to keep track of current position */
  GtkWidget *streams_list;        /* Text widget to display info about the streams */
  gulong slider_update_signal_id; /* Signal ID for the slider update signal */

  GstState state;  /* Current state of the pipeline */
  gint64 duration; /* Duration of the clip, in nanoseconds */
};

/* C++ refactoring tutorial*/
class AMZPlayer
{
private:
  CustomData data;
  /* Handler for the pad-added signal */
 

public:
  
};