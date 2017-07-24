/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * BreEvent.h
 *
 * 
 */

#ifndef BreEvent_H_
#define BreEvent_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BreEvent
    : public ModelBase
{
public:
    BreEvent();
    virtual ~BreEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BreEvent members

    /// <summary>
    /// The event name of the trigger to be fired
    /// </summary>
    utility::string_t getEventName() const;
        void setEventName(utility::string_t value);
    /// <summary>
    /// The parameters to the event. A Map (assosiative array) with a key for each trigger parameter name and a corrosponding value.
    /// </summary>
    std::shared_ptr<Object> getParams() const;
        void setParams(std::shared_ptr<Object> value);

protected:
    utility::string_t m_Event_name;
        std::shared_ptr<Object> m_Params;
    };

}
}
}
}

#endif /* BreEvent_H_ */
