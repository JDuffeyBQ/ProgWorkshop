/*
 * Your License or Copyright can go here
 */

#pragma once

#include "SIMPLib/Common/SIMPLibSetGetMacros.h"
#include "SIMPLib/Filtering/AbstractFilter.h"
#include "SIMPLib/SIMPLib.h"

#include "ProgWorkshop/ProgWorkshopDLLExport.h"

/**
 * @brief The Lesson7 class. See [Filter documentation](@ref lesson7) for details.
 */
class ProgWorkshop_EXPORT Lesson7 : public AbstractFilter
{
  Q_OBJECT
  PYB11_CREATE_BINDINGS(Lesson7 SUPERCLASS AbstractFilter)
  PYB11_PROPERTY(QString GeometrySelection READ getGeometrySelection WRITE setGeometrySelection)

public:
  SIMPL_SHARED_POINTERS(Lesson7)
  SIMPL_FILTER_NEW_MACRO(Lesson7)
  SIMPL_TYPE_MACRO_SUPER_OVERRIDE(Lesson7, AbstractFilter)

  ~Lesson7() override;

  SIMPL_FILTER_PARAMETER(QString, GeometrySelection)
  Q_PROPERTY(QString GeometrySelection READ getGeometrySelection WRITE setGeometrySelection)

  /**
   * @brief getCompiledLibraryName Reimplemented from @see AbstractFilter class
   */
  const QString getCompiledLibraryName() const override;

  /**
   * @brief getBrandingString Returns the branding string for the filter, which is a tag
   * used to denote the filter's association with specific plugins
   * @return Branding string
   */
  const QString getBrandingString() const override;

  /**
   * @brief getFilterVersion Returns a version string for this filter. Default
   * value is an empty string.
   * @return
   */
  const QString getFilterVersion() const override;

  /**
   * @brief newFilterInstance Reimplemented from @see AbstractFilter class
   */
  AbstractFilter::Pointer newFilterInstance(bool copyFilterParameters) const override;

  /**
   * @brief getGroupName Reimplemented from @see AbstractFilter class
   */
  const QString getGroupName() const override;

  /**
   * @brief getSubGroupName Reimplemented from @see AbstractFilter class
   */
  const QString getSubGroupName() const override;

  /**
   * @brief getUuid Return the unique identifier for this filter.
   * @return A QUuid object.
   */
  const QUuid getUuid() override;

  /**
   * @brief getHumanLabel Reimplemented from @see AbstractFilter class
   */
  const QString getHumanLabel() const override;

  /**
   * @brief setupFilterParameters Reimplemented from @see AbstractFilter class
   */
  void setupFilterParameters() override;

  /**
   * @brief execute Reimplemented from @see AbstractFilter class
   */
  void execute() override;

  /**
   * @brief preflight Reimplemented from @see AbstractFilter class
   */
  void preflight() override;

signals:
  /**
   * @brief updateFilterParameters Emitted when the Filter requests all the latest Filter parameters
   * be pushed from a user-facing control (such as a widget)
   * @param filter Filter instance pointer
   */
  void updateFilterParameters(AbstractFilter* filter);

  /**
   * @brief parametersChanged Emitted when any Filter parameter is changed internally
   */
  void parametersChanged();

  /**
   * @brief preflightAboutToExecute Emitted just before calling dataCheck()
   */
  void preflightAboutToExecute();

  /**
   * @brief preflightExecuted Emitted just after calling dataCheck()
   */
  void preflightExecuted();

protected:
  Lesson7();

  /**
   * @brief dataCheck Checks for the appropriate parameter values and availability of arrays
   */
  void dataCheck();

  /**
   * @brief Initializes all the private instance variables.
   */
  void initialize();

public:
  Lesson7(const Lesson7&) = delete;            // Copy Constructor Not Implemented
  Lesson7(Lesson7&&) = delete;                 // Move Constructor Not Implemented
  Lesson7& operator=(const Lesson7&) = delete; // Copy Assignment Not Implemented
  Lesson7& operator=(Lesson7&&) = delete;      // Move Assignment
};

