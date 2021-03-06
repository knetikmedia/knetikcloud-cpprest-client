/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ContributionResource.h
 *
 * 
 */

#ifndef ContributionResource_H_
#define ContributionResource_H_


#include "ModelBase.h"

#include "SimpleReferenceResource«long».h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ContributionResource
    : public ModelBase
{
public:
    ContributionResource();
    virtual ~ContributionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ContributionResource members

    /// <summary>
    /// A reference to the contributing artist
    /// </summary>
    std::shared_ptr<SimpleReferenceResource«long»> getArtist() const;
        void setArtist(std::shared_ptr<SimpleReferenceResource«long»> value);
    /// <summary>
    /// A reference to the media being contributed to
    /// </summary>
    std::shared_ptr<SimpleReferenceResource«long»> getMedia() const;
        void setMedia(std::shared_ptr<SimpleReferenceResource«long»> value);
    /// <summary>
    /// The nature of the contribution (role of the artist as in &#39;producer&#39;, &#39;performer&#39;, etc)
    /// </summary>
    utility::string_t getRole() const;
        void setRole(utility::string_t value);

protected:
    std::shared_ptr<SimpleReferenceResource«long»> m_Artist;
        std::shared_ptr<SimpleReferenceResource«long»> m_Media;
        utility::string_t m_Role;
    };

}
}
}
}

#endif /* ContributionResource_H_ */
